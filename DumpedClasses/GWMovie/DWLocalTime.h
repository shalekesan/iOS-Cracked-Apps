//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class DWHTTPRequest, NSMutableString, NSString;

@interface DWLocalTime : NSObject <NSXMLParserDelegate>
{
    DWHTTPRequest *_request;
    double _timeoutSeconds;
    CDUnknownBlockType _errorBlock;
    CDUnknownBlockType _finishBlock;
    NSString *_localtime;
    NSMutableString *_currentElementValue;
}

@property(retain, nonatomic) NSMutableString *currentElementValue; // @synthesize currentElementValue=_currentElementValue;
@property(copy, nonatomic) NSString *localtime; // @synthesize localtime=_localtime;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property(retain, nonatomic) DWHTTPRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
