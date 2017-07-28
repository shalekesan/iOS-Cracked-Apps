//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController;

@interface MQPBaseService : NSObject
{
    UIViewController *_rootViewController;
    NSString *_name;
    id <MQPServiceDelegate> _delegate;
}

@property(nonatomic) __weak id <MQPServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (void)handleMessage:(id)arg1;
- (void)reset;
- (void)stop;
- (_Bool)startWithOptions:(id)arg1;

@end

