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
	{ 0x66e9f04d, "release_sock" },
	{ 0xda226a4d, "l2tp_session_free" },
	{ 0xfc071489, "ip_getsockopt" },
	{ 0xa1750c59, "ip_setsockopt" },
	{ 0xd81314bf, "sk_setup_caps" },
	{ 0x4c764fdc, "sock_gettstamp" },
	{ 0xa8b80792, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9cb7b658, "l2tp_recv_common" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xec731c3c, "sock_queue_rcv_skb" },
	{ 0x30ec4321, "skb_recv_datagram" },
	{ 0xcbb1f72a, "inet_sendmsg" },
	{ 0x2b71cdb8, "inet_del_protocol" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x88a67e53, "sk_common_release" },
	{ 0x603ba1d2, "compat_sock_common_setsockopt" },
	{ 0x54e96042, "inet_dgram_connect" },
	{ 0xcd97baf8, "sock_common_recvmsg" },
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0xdeb7eb4, "compat_sock_common_getsockopt" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0xee8de09d, "compat_ip_getsockopt" },
	{ 0x1fcaa67f, "__sock_recv_wifi_status" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0xc5850110, "printk" },
	{ 0x3d669121, "inet_addr_type" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0xd1b30930, "__ip_queue_xmit" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xbe2849ad, "inet_shutdown" },
	{ 0xb601bfb9, "inet_add_protocol" },
	{ 0x47374de, "__sock_recv_timestamp" },
	{ 0x5a5bc92e, "inet_ioctl" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xf9e7b235, "__sk_receive_skb" },
	{ 0x82e93499, "ip_cmsg_recv_offset" },
	{ 0xbb9c728c, "proto_register" },
	{ 0xb9366843, "__sk_dst_check" },
	{ 0xed61e42d, "inet_release" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x97493cb0, "datagram_poll" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x1865e519, "proto_unregister" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbda1d8ac, "compat_ip_setsockopt" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xbb038948, "ip_route_output_flow" },
	{ 0x5083ef8f, "sock_common_setsockopt" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xf9778613, "__xfrm_policy_check" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x801f93f2, "inet_register_protosw" },
	{ 0x5f86a75b, "__udp_disconnect" },
	{ 0x1fe6e70f, "l2tp_tunnel_delete" },
	{ 0x1bf9ff37, "inet_bind" },
	{ 0x71190f1e, "sock_common_getsockopt" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x516fc3ce, "__ip4_datagram_connect" },
	{ 0xa3d8c124, "sock_wmalloc" },
	{ 0x20126f2e, "l2tp_session_get" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x3c953993, "inet_unregister_protosw" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6fe64a49, "skb_free_datagram" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "2A6F1C47095F0CB6065A320");
