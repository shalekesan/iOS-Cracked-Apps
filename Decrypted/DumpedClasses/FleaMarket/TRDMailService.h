//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPSMTPMessageDelegate.h"

@class NSArray, NSDictionary, SKPSMTPMessage;

@interface TRDMailService : NSObject <SKPSMTPMessageDelegate>
{
    SKPSMTPMessage *_mailMsg;
    NSDictionary *_defaultsMailDic;
    NSArray *_defaultCode;
    id <TRDMailServiceDelegate> _delegate;
}

+ (id)shareInstance;
@property(nonatomic) __weak id <TRDMailServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)messageFailed:(id)arg1 error:(id)arg2;
- (void)messageSent:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)init;
- (void)stop;

@end

