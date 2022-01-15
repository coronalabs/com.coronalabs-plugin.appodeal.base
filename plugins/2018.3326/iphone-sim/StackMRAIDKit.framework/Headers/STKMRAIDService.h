//
//  AMKWebServiceManager.h
//
//  Copyright © 2019 Appodeal. All rights reserved.
//

#import <StackMRAIDKit/STKMRAIDServiceConfiguration.h>

NS_ASSUME_NONNULL_BEGIN

@protocol STKMRAIDServiceDelegate <NSObject>

@optional

- (void)mraidServiceCreateCalendarEventWithEventJSON:(NSString *)eventJSON;

- (void)mraidServicePlayVideoWithUrlString:(NSString *)urlString;

- (void)mraidServiceStorePictureWithUrlString:(NSString *)urlString;

- (void)mraidServiceDidReceiveLogMessage:(NSString *)message;

@end

@interface STKMRAIDService : NSObject

@property (nonatomic, strong, readonly) STKMRAIDServiceConfiguration *configuration;

@property (nonatomic, weak) id<STKMRAIDServiceDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
