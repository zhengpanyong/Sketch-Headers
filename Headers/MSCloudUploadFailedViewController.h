//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSCloudBaseViewController.h"

@class NSButton, NSError, SCKShare;

@interface MSCloudUploadFailedViewController : MSCloudBaseViewController
{
    NSError *_error;
    SCKShare *_existingShare;
    NSButton *_retryButton;
}

@property(retain, nonatomic) NSButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) SCKShare *existingShare; // @synthesize existingShare=_existingShare;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)retryUpload:(id)arg1;
- (void)updateErrorDescription;
- (void)viewDidLoad;
- (void)loadView;

@end
