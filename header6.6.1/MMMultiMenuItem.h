//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

@interface MMMultiMenuItem : NSObject
{
    long long _editingStyle;
    UIColor *_backgroundColor;
    NSString *_nsTitle;
    UIImage *_icon;
    MMMultiMenuItem *_confirmMenuItem;
}

@property(retain, nonatomic) MMMultiMenuItem *confirmMenuItem; // @synthesize confirmMenuItem=_confirmMenuItem;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *nsTitle; // @synthesize nsTitle=_nsTitle;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long editingStyle; // @synthesize editingStyle=_editingStyle;
- (void).cxx_destruct;

@end

