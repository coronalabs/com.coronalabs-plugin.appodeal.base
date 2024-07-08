#import <UIKit/UIKit.h>
#import <StackOpenMeasure/StackOpenMeasure.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSMutableArray (BDMIABExtension)

- (void)addFriendlyObstructionWithView:(UIView *)view
                                  type:(STKMeasureObstructionType)type;

@end

NS_ASSUME_NONNULL_END
