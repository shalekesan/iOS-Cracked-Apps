//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XSessionMember : NSObject
{
    int _State;
    int _Role;
    unsigned long long _Sid;
    unsigned long long _Uid;
}

+ (id)info:(unsigned long long)arg1 andUid:(unsigned long long)arg2 inDb:(id)arg3;
+ (void)save:(id)arg1 to:(id)arg2;
+ (void)query:(id)arg1 inDb:(id)arg2 by:(unsigned long long)arg3 andUid:(unsigned long long)arg4 withCallback:(CDUnknownBlockType)arg5;
+ (_Bool)query:(id)arg1 inDb:(id)arg2 by:(unsigned long long)arg3 andUid:(unsigned long long)arg4;
+ (_Bool)query:(id)arg1 hitResult:(id)arg2 inDb:(id)arg3;
+ (void)fill:(id)arg1 fromNetSet:(id)arg2 inDb:(id)arg3;
+ (void)fill:(id)arg1 fromDbSet:(id)arg2 inDb:(id)arg3;
+ (void)whenDbOpen:(id)arg1;
+ (void)whenDbDegrade:(id)arg1 from:(long long)arg2 to:(long long)arg3;
+ (void)whenDbUpgrade:(id)arg1 from:(long long)arg2 to:(long long)arg3;
+ (void)whenDbCreate:(id)arg1;
@property int Role; // @synthesize Role=_Role;
@property int State; // @synthesize State=_State;
@property unsigned long long Uid; // @synthesize Uid=_Uid;
@property unsigned long long Sid; // @synthesize Sid=_Sid;

@end

