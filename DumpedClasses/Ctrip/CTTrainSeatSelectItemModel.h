//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTTrainSeatSelectItemModel : NSObject
{
    _Bool _isSelectedA;
    _Bool _isSelectedB;
    _Bool _isSelectedC;
    _Bool _isSelectedD;
    _Bool _isSelectedF;
}

@property(nonatomic) _Bool isSelectedF; // @synthesize isSelectedF=_isSelectedF;
@property(nonatomic) _Bool isSelectedD; // @synthesize isSelectedD=_isSelectedD;
@property(nonatomic) _Bool isSelectedC; // @synthesize isSelectedC=_isSelectedC;
@property(nonatomic) _Bool isSelectedB; // @synthesize isSelectedB=_isSelectedB;
@property(nonatomic) _Bool isSelectedA; // @synthesize isSelectedA=_isSelectedA;
- (id)selectedSeats;
- (long long)selectedNumber;

@end
