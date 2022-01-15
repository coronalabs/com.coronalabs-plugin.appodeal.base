//
//  AMKWebAdConfiguration.h
//
//  Copyright © 2019 Appodeal. All rights reserved.
//

#import <StackMRAIDKit/STKScriptMessageHandlerProtocol.h>


NS_ASSUME_NONNULL_BEGIN

@interface STKMRAIDWebConfiguration : NSObject

@property (nonatomic, readonly) NSString *baseUrl;

@property (nonatomic, readonly) WKUserContentController *contentController;

@property (nonatomic, readonly) void(^appendScript)(WKUserScript *);

@property (nonatomic, readonly) void(^appendMessageHandler)(id<STKScriptMessageHandler>);

@property (nonatomic, readonly) void(^appendBaseUrl)(NSString *);

@end

NS_ASSUME_NONNULL_END
