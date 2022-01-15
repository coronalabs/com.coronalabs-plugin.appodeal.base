//
//  AMCAdUnitProtocol.h
//  AppodealMediationCore-ObjC
//
//  Created by Stas Kochkin on 10/09/2018.
//  Copyright © 2018 Stas Kochkin. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, AMCAdUnitType) {
    AMCAdUnitTypePrecache = 0,
    AMCAdUnitTypeTargeted,
    AMCAdUnitTypeMain
};

typedef NS_ENUM(NSUInteger, AMCAdUnitStrategy) {
    AMCAdUnitStrategySynchronous = 0,
    AMCAdUnitStrategyAsynchronous
};

@protocol AMCAdUnit <NSObject>

@property (nonatomic, assign, readonly) AMCAdUnitType type;
@property (nonatomic, assign, readonly) AMCAdUnitStrategy strategy;
@property (nonatomic, assign, readonly) NSTimeInterval timeout;

@end
