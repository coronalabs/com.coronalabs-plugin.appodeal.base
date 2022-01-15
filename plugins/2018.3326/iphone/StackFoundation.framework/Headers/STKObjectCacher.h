//
//  STKObjectCacher.h
//  StackFoundation
//
//  Created by Ilia Lozhkin on 7/2/19.
//  Copyright © 2019 Stack. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface STKObjectCacher : NSObject

+ (void)cacheObject:(id<NSCoding> _Nullable)object forName:(NSString *_Nullable)name;

+ (id<NSCoding>_Nullable)objectFromName:(NSString *_Nullable)name;

@end

NS_ASSUME_NONNULL_END
