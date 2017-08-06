//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class JSValue, NSString;

@protocol KKJSElementProtocol <JSExport>
@property(readonly, nonatomic) __weak id <KKJSElementProtocol> prevSibling;
@property(readonly, nonatomic) id <KKJSElementProtocol> nextSibling;
@property(readonly, nonatomic) id <KKJSElementProtocol> lastChild;
@property(readonly, nonatomic) id <KKJSElementProtocol> firstChild;
@property(readonly, nonatomic) __weak id <KKJSElementProtocol> parent;
- (id <KKJSElementProtocol>)offJS:(NSString *)arg1;
- (id <KKJSElementProtocol>)onJS:(NSString *)arg1 fn:(JSValue *)arg2;
- (id <KKJSElementProtocol>)setJSValue:(id)arg1 name:(NSString *)arg2;
- (id)getJSValue:(NSString *)arg1;

@optional
- (id <KKJSElementProtocol>)offJS:(NSString *)arg1 __JS_EXPORT_AS__off:(id)arg2;
- (id <KKJSElementProtocol>)onJS:(NSString *)arg1 fn:(JSValue *)arg2 __JS_EXPORT_AS__on:(id)arg3;
- (id <KKJSElementProtocol>)setJSValue:(id)arg1 name:(NSString *)arg2 __JS_EXPORT_AS__set:(id)arg3;
- (id)getJSValue:(NSString *)arg1 __JS_EXPORT_AS__get:(id)arg2;
@end
