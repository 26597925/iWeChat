//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IPRecord : NSObject
{
    _Bool _quicChannel;
    NSString *ip;
    NSString *port;
    long long connTimes;
}

@property(nonatomic) _Bool quicChannel; // @synthesize quicChannel=_quicChannel;
@property(nonatomic) long long connTimes; // @synthesize connTimes;
@property(retain, nonatomic) NSString *port; // @synthesize port;
@property(retain, nonatomic) NSString *ip; // @synthesize ip;
- (void).cxx_destruct;

@end
