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
	{ 0x84827b14, "compat_ipv6_getsockopt" },
	{ 0x1c681750, "compat_ipv6_setsockopt" },
	{ 0xe7dd4c18, "ipv6_getsockopt" },
	{ 0x51674ac6, "ipv6_setsockopt" },
	{ 0x5f612154, "l2tp_ioctl" },
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0xcd97baf8, "sock_common_recvmsg" },
	{ 0xcbb1f72a, "inet_sendmsg" },
	{ 0xdeb7eb4, "compat_sock_common_getsockopt" },
	{ 0x603ba1d2, "compat_sock_common_setsockopt" },
	{ 0x71190f1e, "sock_common_getsockopt" },
	{ 0x5083ef8f, "sock_common_setsockopt" },
	{ 0xbe2849ad, "inet_shutdown" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0x4c764fdc, "sock_gettstamp" },
	{ 0x484ecab2, "inet6_ioctl" },
	{ 0x97493cb0, "datagram_poll" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x54e96042, "inet_dgram_connect" },
	{ 0xe146138f, "inet6_bind" },
	{ 0xa5d84659, "inet6_release" },
	{ 0x49e6d078, "inet6_del_protocol" },
	{ 0xb5064d8b, "inet6_unregister_protosw" },
	{ 0xed8ffca4, "inet6_register_protosw" },
	{ 0x1865e519, "proto_unregister" },
	{ 0x417488f5, "inet6_add_protocol" },
	{ 0xbb9c728c, "proto_register" },
	{ 0xc5850110, "printk" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xf9778613, "__xfrm_policy_check" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xf9e7b235, "__sk_receive_skb" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xda226a4d, "l2tp_session_free" },
	{ 0x9cb7b658, "l2tp_recv_common" },
	{ 0x20126f2e, "l2tp_session_get" },
	{ 0x77952e4f, "__fl6_sock_lookup" },
	{ 0xc2fbda5, "ip6_dst_hoplimit" },
	{ 0xdc721691, "ip6_push_pending_frames" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xcd5835b, "ipv6_flowlabel_exclusive" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xa8b80792, "dst_release" },
	{ 0x4ff96676, "ip6_append_data" },
	{ 0x2fc6ce4a, "ip_generic_getfrag" },
	{ 0x545a9fbb, "ip6_dst_lookup_flow" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0x507ebc7d, "fl6_update_dst" },
	{ 0x573b5453, "ipv6_fixup_options" },
	{ 0x9a447730, "fl6_merge_options" },
	{ 0x6dc5a4e6, "ip6_datagram_send_ctl" },
	{ 0x88a67e53, "sk_common_release" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xec731c3c, "sock_queue_rcv_skb" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x6aa56670, "ipv6_chk_addr" },
	{ 0x91b9215a, "dev_get_by_index_rcu" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x5fe6c901, "__ip6_datagram_connect" },
	{ 0x5f86a75b, "__udp_disconnect" },
	{ 0x56253529, "inet6_destroy_sock" },
	{ 0x1fe6e70f, "l2tp_tunnel_delete" },
	{ 0x66e9f04d, "release_sock" },
	{ 0xbdafcc71, "ip6_flush_pending_frames" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1fcaa67f, "__sock_recv_wifi_status" },
	{ 0xe94ef6e1, "ip6_datagram_recv_ctl" },
	{ 0x47374de, "__sock_recv_timestamp" },
	{ 0xcaa27d65, "ipv6_recv_error" },
	{ 0x6fe64a49, "skb_free_datagram" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0x30ec4321, "skb_recv_datagram" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "l2tp_ip,l2tp_core");


MODULE_INFO(srcversion, "23763C14F1D2E93A05CFBB6");
