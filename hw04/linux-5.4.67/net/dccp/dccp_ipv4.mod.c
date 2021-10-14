#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xbdbcfd95, "inet_csk_reqsk_queue_drop" },
	{ 0x59814a84, "dccp_statistics" },
	{ 0x49045426, "icmp_err_convert" },
	{ 0xb7fa4861, "dccp_init_sock" },
	{ 0xe35bbddf, "dccp_set_state" },
	{ 0xfc071489, "ip_getsockopt" },
	{ 0xd60f859b, "inet_unhash" },
	{ 0x521bcf07, "inet_twsk_put" },
	{ 0x722630de, "dccp_hashinfo" },
	{ 0xa1750c59, "ip_setsockopt" },
	{ 0x7e7c3f91, "dccp_sendmsg" },
	{ 0x3019d23, "ip_build_and_send_pkt" },
	{ 0xd81314bf, "sk_setup_caps" },
	{ 0x4c764fdc, "sock_gettstamp" },
	{ 0x5a150a6f, "dccp_ctl_make_reset" },
	{ 0x3be4fd34, "dccp_destroy_sock" },
	{ 0xb7d46d64, "dccp_make_response" },
	{ 0x40aebdcf, "sock_release" },
	{ 0xa8b80792, "dst_release" },
	{ 0x75f23aee, "dccp_send_sync" },
	{ 0x6b4314c5, "dccp_rcv_established" },
	{ 0x452d7db2, "security_skb_classify_flow" },
	{ 0x671999fb, "inet_csk_prepare_forced_close" },
	{ 0x2bde392, "dccp_create_openreq_child" },
	{ 0x52360bf7, "dccp_check_req" },
	{ 0xcbb1f72a, "inet_sendmsg" },
	{ 0x5648702f, "dccp_recvmsg" },
	{ 0x2b71cdb8, "inet_del_protocol" },
	{ 0x14664645, "inet_sk_rebuild_header" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x660e6f1c, "dccp_ioctl" },
	{ 0x603ba1d2, "compat_sock_common_setsockopt" },
	{ 0x15e72a87, "dccp_setsockopt" },
	{ 0xcd97baf8, "sock_common_recvmsg" },
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0x45988096, "dccp_child_process" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0xdeb7eb4, "compat_sock_common_getsockopt" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0xa1027c17, "skb_checksum" },
	{ 0xee8de09d, "compat_ip_getsockopt" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0xa08e407a, "dccp_parse_options" },
	{ 0xff5b94a5, "compat_dccp_setsockopt" },
	{ 0x946e37b3, "dccp_getsockopt" },
	{ 0x3d847961, "inet_csk_update_pmtu" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5b62cb5f, "inet_csk_route_req" },
	{ 0x6c974b8c, "inet_csk_route_child_sock" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0xd1b30930, "__ip_queue_xmit" },
	{ 0x3c008b23, "inet_hash_connect" },
	{ 0xfe0dcfa, "dccp_reqsk_init" },
	{ 0xe0348703, "dccp_close" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xbe2849ad, "inet_shutdown" },
	{ 0xb601bfb9, "inet_add_protocol" },
	{ 0xc3b6a26c, "dccp_orphan_count" },
	{ 0xecd479b0, "dccp_sync_mss" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x42593850, "inet_accept" },
	{ 0x8e4ea941, "inet_csk_reqsk_queue_drop_and_put" },
	{ 0xc65e4e97, "secure_dccp_sequence_number" },
	{ 0x5a5bc92e, "inet_ioctl" },
	{ 0x188a8e83, "inet_csk_get_port" },
	{ 0xa2624a42, "dccp_death_row" },
	{ 0x3f7763de, "inet_ctl_sock_create" },
	{ 0x926d08ab, "dccp_poll" },
	{ 0xf9e7b235, "__sk_receive_skb" },
	{ 0x3ebe87b5, "inet_hash" },
	{ 0xbb9c728c, "proto_register" },
	{ 0x95952c47, "ip_route_output_key_hash" },
	{ 0xf4f9ddd5, "dccp_disconnect" },
	{ 0xb9366843, "__sk_dst_check" },
	{ 0xed61e42d, "inet_release" },
	{ 0xf3914474, "dccp_done" },
	{ 0x57732438, "inet_twsk_purge" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1f0dca47, "inet_reqsk_alloc" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x1865e519, "proto_unregister" },
	{ 0x28cf8223, "inet_stream_connect" },
	{ 0xe2dae6b4, "inet_getname" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaeb5ab0, "inet_ehash_nolisten" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4cdd391d, "dccp_feat_list_purge" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbda1d8ac, "compat_ip_setsockopt" },
	{ 0x2f0f5d7f, "inet_csk_reqsk_queue_hash_add" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x281cdb67, "compat_dccp_getsockopt" },
	{ 0xbb038948, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5083ef8f, "sock_common_setsockopt" },
	{ 0xf9778613, "__xfrm_policy_check" },
	{ 0x801f93f2, "inet_register_protosw" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1761617, "security_inet_conn_request" },
	{ 0xe1d7cdff, "inet_dccp_listen" },
	{ 0x6ff30702, "__inet_inherit_port" },
	{ 0x1bf9ff37, "inet_bind" },
	{ 0x71190f1e, "sock_common_getsockopt" },
	{ 0x86be7924, "dccp_packet_name" },
	{ 0x88c504a8, "inet_csk_accept" },
	{ 0x92f63ade, "__inet_lookup_listener" },
	{ 0x8efadf31, "dccp_reqsk_send_ack" },
	{ 0x15761c04, "dccp_rcv_state_process" },
	{ 0x4714087b, "dccp_connect" },
	{ 0x3548ab5b, "dccp_shutdown" },
	{ 0x3c953993, "inet_unregister_protosw" },
	{ 0xf4835bc0, "inet_csk_addr2sockaddr" },
	{ 0x91cc9d2a, "__inet_lookup_established" },
};

MODULE_INFO(depends, "dccp");


MODULE_INFO(srcversion, "B574C12DFB747EB6F051643");
