//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableOrderedSet;

@interface AppMonitorDimensionSet : NSObject <NSCoding>
{
    NSMutableOrderedSet *_dimensions;
}

+ (id)setWithArray:(id)arg1;
@property(retain, nonatomic) NSMutableOrderedSet *dimensions; // @synthesize dimensions=_dimensions;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setConstantValue:(id)arg1;
- (id)dimensionForName:(id)arg1;
- (void)addDimensionWithName:(id)arg1;
- (void)addDimension:(id)arg1;
- (_Bool)valid:(id)arg1;

@end

