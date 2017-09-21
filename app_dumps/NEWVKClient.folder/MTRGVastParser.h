/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSXMLParserDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MTRGVastExtension, MTRGVastImpression, MTRGVastAdInLine, MTRGVastVideoClick, NSString, NSMutableArray, NSXMLParser, MTRGVastTrackingEvent, MTRGVastCompanion, MTRGVastAdWrapper, MTRGVastObject, MTRGVastMediafile, MTRGVastCreativeLinear, MTRGError, MTRGVastCreative;

@interface MTRGVastParser : XXUnknownSuperclass <NSXMLParserDelegate> {
	id _logWarningBlock;
	NSXMLParser* _xmlParser;
	NSMutableArray* _currentTagPath;
	NSString* _lastTag;
	MTRGVastObject* _vastObject;
	MTRGVastAdWrapper* _vastWrapper;
	MTRGVastAdInLine* _vastInLine;
	MTRGVastImpression* _impression;
	MTRGVastCreative* _creative;
	MTRGVastCreativeLinear* _creativeLinear;
	BOOL _waitCreatives;
	BOOL _waitTrackingEvents;
	MTRGVastTrackingEvent* _trackingEvent;
	BOOL _waitVideoClicks;
	MTRGVastVideoClick* _videoClick;
	MTRGVastExtension* _extension;
	MTRGVastMediafile* _mediafile;
	MTRGVastCompanion* _companion;
	NSString* _companionRequired;
	BOOL _isAborting;
	MTRGError* _error;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(BOOL)isVastXmlString:(id)string;
+(id)parseVastData:(id)data parseError:(id*)error onLog:(id)log;
-(void).cxx_destruct;
-(BOOL)checkCompanion:(id)companion;
-(BOOL)checkMediafile:(id)mediafile;
-(BOOL)checkCreativeLinear:(id)linear;
-(id)createTrackingEventWithDict:(id)dict;
-(id)vastTimeIntervalFromString:(id)string;
-(double)vastDurationFromString:(id)string;
-(id)percentCountFromString:(id)string;
-(id)timeNumberFromStringHHMMSSmmm:(id)stringHHMMSSmmm;
-(id)timeNumberFromStringHHMMSS:(id)stringHHMMSS;
-(id)numberFromString:(id)string;
-(id)numberValueForKey:(id)key dict:(id)dict;
-(id)stringValueForKey:(id)key dict:(id)dict;
-(void)foundCharacters:(id)characters;
-(id)extenstionValueWithSrcString:(id)srcString;
-(void)foundCDATA:(id)cdata;
-(void)finishParseWithTag:(id)tag;
-(void)startParseWithTag:(id)tag attributes:(id)attributes;
-(void)parser:(id)parser foundCDATA:(id)cdata;
-(void)parser:(id)parser foundCharacters:(id)characters;
-(void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(void)parser:(id)parser validationErrorOccurred:(id)occurred;
-(void)parser:(id)parser parseErrorOccurred:(id)occurred;
-(void)parserDidEndDocument:(id)parser;
-(void)parserDidStartDocument:(id)parser;
-(BOOL)checkResult;
-(void)doLogEventWithError:(id)error;
-(void)finishWithError:(id)error;
-(void)finishWithComplete;
-(id)vastObject;
-(id)parseVastDataPrivate:(id)aPrivate parseError:(id*)error onLog:(id)log;
-(id)init;
@end

