//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilterGroup.h"

@class VSImageHistogramFilter, VSImageRawDataInput, VSImageRawDataOutput;

@interface VSImageHistogramEqualizationFilter : VSImageFilterGroup
{
    VSImageHistogramFilter *histogramFilter;
    VSImageRawDataOutput *rawDataOutputFilter;
    VSImageRawDataInput *rawDataInputFilter;
    unsigned long long _downsamplingFactor;
}

@property(nonatomic) unsigned long long downsamplingFactor; // @synthesize downsamplingFactor=_downsamplingFactor;
- (void).cxx_destruct;
- (id)initWithHistogramType:(int)arg1;
- (id)init;

@end

