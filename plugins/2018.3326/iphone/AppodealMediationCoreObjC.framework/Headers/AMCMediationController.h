//
//  AMCMediationController.h
//  AppodealMediationCore-ObjC
//
//  Created by Stas Kochkin on 10/09/2018.
//  Copyright © 2018 Stas Kochkin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AppodealMediationCoreObjC/AMCAdUnitProtocol.h>

@class AMCMediationController;

/**
 Mediaition controller delegate
 */
@protocol AMCMediationControllerDelegate <NSObject>
/**
 Notify that controller starts proceed some ad unit in group

 @param controller Current controller
 @param adUnit Ad unit that starts to proceed
 */
- (void)controller:(AMCMediationController *)controller willProceedAdUnit:(id<AMCAdUnit>)adUnit;
/**
 Check that controller should proceed ad unit

 @param controller Current controller
 @param adUnit Ad unit that prepared to be proceeded
 @return Boolean flag that indicates should ad unit will be proceeded or not
 */
- (BOOL)controller:(AMCMediationController *)controller shouldProceedAdUnit:(id<AMCAdUnit>)adUnit;
/**
 Notify that ad unit discarded in case it was in progress and mediation breaks

 @param controller Current controller
 @param adUnit Discarded ad unit
 */
- (void)controller:(AMCMediationController *)controller willDiscardAdUnit:(id<AMCAdUnit>)adUnit;
/**
 Notify that ad unit task expired

 @param controller Current controller
 @param adUnit Ad unit
 */
- (void)controller:(AMCMediationController *)controller willExpiredAdUnit:(id<AMCAdUnit>)adUnit;
/**
 Notify that mediation completed with ad units array. Discarded, expired ad units are not includeded

 @param controller Current controller
 @param adUnits Completed ad units
 */
- (void)controller:(AMCMediationController *)controller completeAdUnits:(NSArray <id<AMCAdUnit>> *)adUnits;
    
@end


/**
 Perform mediation for given ad units array.
 */
@interface AMCMediationController : NSObject
/**
 Callback handler
 */
@property (nonatomic, weak) id <AMCMediationControllerDelegate> delegate;
/**
 Starts mediation for given ad units array

 @param adUnits Array of ad units
 */
- (void)proceedAdUnits:(NSArray <id<AMCAdUnit>> *)adUnits;
/**
 Complete ad unit task for simple ad unit

 @param adUnit Completed ad unit
 */
- (void)completeAdUnit:(id<AMCAdUnit>)adUnit;
/**
 Force break current cycle
 */
- (void)breakExecution;
@end
