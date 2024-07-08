#import <Foundation/Foundation.h>
#import <StackMRAIDKit/STKMRAIDServiceConfiguration.h>

NS_ASSUME_NONNULL_BEGIN

@interface STKVASTHTMLCompanionRendererConfiguration : NSObject

@property (nonatomic, strong) STKMRAIDServiceConfiguration *MRAIDServiceConfiguration;

+ (instancetype)configuration;
+ (instancetype)configurationWithMRAIDFeatures:(NSArray <STKMRAIDFeature>*)features
                                   partnerName:(NSString *)partnerName
                                partnerVersion:(NSString *)parpartnerVersion;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
