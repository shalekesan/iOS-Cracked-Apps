//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXModuleProtocol.h"

@class NSDictionary, UIColor, UIViewController;

@protocol WXNavigationProtocol <WXModuleProtocol>
- (void)popViewControllerWithParam:(NSDictionary *)arg1 completion:(void (^)(NSString *, NSDictionary *))arg2 withContainer:(UIViewController *)arg3;
- (void)pushViewControllerWithParam:(NSDictionary *)arg1 completion:(void (^)(NSString *, NSDictionary *))arg2 withContainer:(UIViewController *)arg3;
- (void)clearNavigationItemWithParam:(NSDictionary *)arg1 position:(long long)arg2 completion:(void (^)(NSString *, NSDictionary *))arg3 withContainer:(UIViewController *)arg4;
- (void)setNavigationItemWithParam:(NSDictionary *)arg1 position:(long long)arg2 completion:(void (^)(NSString *, NSDictionary *))arg3 withContainer:(UIViewController *)arg4;
- (void)setNavigationBackgroundColor:(UIColor *)arg1 withContainer:(UIViewController *)arg2;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2 withContainer:(UIViewController *)arg3;
- (id)navigationControllerOfContainer:(UIViewController *)arg1;

@optional
- (void)close:(NSDictionary *)arg1 success:(void (^)(id))arg2 failure:(void (^)(id))arg3 withContainer:(UIViewController *)arg4;
- (void)open:(NSDictionary *)arg1 success:(void (^)(id))arg2 failure:(void (^)(id))arg3 withContainer:(UIViewController *)arg4;
@end

