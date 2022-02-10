RECURSE(
    acceleo
    arcdocidstrip
    archiver
    archiver/alignment_test
    archiver/tests
    base64
    bigram_compiler
    blender
    bmdump
    bstr
    c++filt
    calendar_extractor
    check_formula_md5
    check_json
    check_yaml
    checktrigrams
    clustermaster
    coldiff
    compress
    convert2html
    cproxy
    crc32
    crx_creator
    curl_to_ab
    diaprintkeys
    directindexer
    doc_handle_decode
    doc_handle_decode/ut
    doc_url_index_print
    dolbilo
    domschemec
    domschemec/ut
    drawrichtree
    dsindexer
    easyparser
    enforce_fsync
    enum_parser
    event2cpp
    fast_diff
    fastcksum
    filter_nonucs2
    fix_elf
    fml_sweeper_api
    frq_index_print
    geo
    geodb_ops
    geodb_ops/tests
    geograph_compiler
    go_test_miner
    go_fake_xcrun
    groupgen
    hilite
    host_canonizer
    hostdump
    hostpire
    html2cpp
    html2text
    idl
    idx_relemmatizer
    inflector
    is_holiday
    jsv8
    json_to_jsonlines
    langdiscr-test
    lemmas_merger_builder
    lemmer-test
    lemmer-test/tests
    lenval_debug
    lua
    memcheck
    mirrorsWrapper
    misc_index_print
    mkdocs_builder
    mkdocs_builder/arcadium_helper_plugin
    mkdocs_builder/mkdocs_yandex
    mkdocs_builder/theme
    mstand
    mtime0
    mx_bin2info
    nehc
    nlp_test
    nodeiter_test
    nodeiter_test/tests
    normalize_requests
    nots
    oauth_token
    pgmigrate
    pire
    print_ranking_features
    printcorpus
    printdocstat
    printdom
    printkeys
    printlinks
    printphones
    printreqs
    printreqs/tests
    printrichnode
    printrichnode/tests
    printtrie
    printurls
    printwzrd
    printwzrd/scripts
    printwzrd/tests
    printxmap
    printxref
    prngrp_index_print
    prog_rule
    protobin2mr
    prwordsfr
    pure_compiler
    pure_fingerprints
    pycron
    python-netconfig-static
    qlz
    query_marker_builder
    queryrectest
    queryrectest/tests
    queryrectest/tests/data
    rcgtest
    re_check
    recode
    refaww_index_print
    refdmap_index_print
    reflerf_index_print
    releaser
    relev_fml_codegen
    relev_fml_unused
    remorphc
    remorphparser
    rescompiler
    rescompressor
    rorescompiler
    sandboxctl
    sanitizer
    segutils
    seinfo
    sent_index_print
    showmime
    shutter_jing_plugin
    snipmake
    spamfilt
    stdin
    struct2fieldcalc
    syntaxer
    tarccreate
    tarcview
    templater
    test_norm
    test_relev
    testlangmodel
    thresher
    titleseq_index_print
    tokenize
    tokenize/tests
    tomaparsertest
    trans_str
    triecompiler
    triecompiler/build_tool
    triecompiler/lib
    trie_ops
    trie_ops/lib
    trie_ops/tests
    trigram_index_print
    uc
    unpackrichtree
    unpackrrr
    unpack_staff_cert
    untranslit_test
    untranslit_test/tests
    url
    urlmenuindexer
    urlseq_print
    voice
    webxmltest
    wizard_yt
    ygetparam
    ylzocat
    yson_pp
    zk_client
    idx_print
) 

IF (NOT OS_WINDOWS)
    RECURSE(
        netgdb
    )
ENDIF()
