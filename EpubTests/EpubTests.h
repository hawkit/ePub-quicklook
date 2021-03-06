//
//  EpubTests.h
//  EpubTests
//
//  Created by Chris Ridd on 01/02/2012.
//  Copyright (c) 2012 Chris Ridd. All rights reserved.
//

#import <XCTest/XCTest.h>

@class JTPepub;

@interface EpubTests : XCTestCase {
    JTPepub *untitledFile;
    JTPepub *metadataFile;
    JTPepub *badcontributorFile;
    JTPepub *adeptFile;
    JTPepub *bnFile;
    JTPepub *fairplayFile;
    JTPepub *koboFile;
    JTPepub *libraryFile;
}
@end
