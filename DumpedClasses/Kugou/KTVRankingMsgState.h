//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@interface KTVRankingMsgState : KTVObjectModel
{
    int _playerId;
    long long _kvId;
    long long _opusSwitch;
    long long _asFansSwitch;
    long long _wealthSwitch;
}

@property(nonatomic) long long wealthSwitch; // @synthesize wealthSwitch=_wealthSwitch;
@property(nonatomic) long long asFansSwitch; // @synthesize asFansSwitch=_asFansSwitch;
@property(nonatomic) long long opusSwitch; // @synthesize opusSwitch=_opusSwitch;
@property(nonatomic) int playerId; // @synthesize playerId=_playerId;
@property(nonatomic) long long kvId; // @synthesize kvId=_kvId;

@end
