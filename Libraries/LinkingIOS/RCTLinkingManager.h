/**
 * Copyright (c) 2015-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <React/RCTEventEmitter.h>

@interface RCTLinkingManager : RCTEventEmitter

+ (BOOL)application:( UIApplication *_Nullable)app
            openURL:( NSURL *__nullable)URL
            options:( NSDictionary<UIApplicationOpenURLOptionsKey,id> *_Nullable)options;

+ (BOOL)application:( UIApplication *__nullable)application
            openURL:( NSURL *__nullable)URL
  sourceApplication:( NSString *__nullable)sourceApplication
         annotation:( id _Nullable )annotation;

+ (BOOL)application:( UIApplication *__nullable)application
continueUserActivity:( NSUserActivity *__nullable)userActivity
 restorationHandler:(void (^_Nullable)(NSArray * __nullable))restorationHandler;

@end
