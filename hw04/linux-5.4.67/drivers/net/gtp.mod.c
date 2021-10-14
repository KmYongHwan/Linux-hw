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
	{ 0x5d027ee5, "ip_tunnel_get_stats64" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x71227479, "genl_unregister_family" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x1c06f459, "genl_register_family" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x2abce662, "udp_tunnel_xmit_skb" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0x15314fce, "consume_skb" },
	{ 0xee5d0fe, "__icmp_send" },
	{ 0xa8b80792, "dst_release" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb038948, "ip_route_output_flow" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x7a34906f, "__iptunnel_pull_header" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x461a82b8, "setup_udp_tunnel_sock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa0fd0123, "fput" },
	{ 0xc851a750, "sockfd_lookup" },
	{ 0x5df081, "__put_net" },
	{ 0x91b9215a, "dev_get_by_index_rcu" },
	{ 0xe737d8d6, "get_net_ns_by_fd" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x66e9f04d, "release_sock" },
	{ 0xc6eb389b, "sk_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x789d8622, "genlmsg_put" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udp_tunnel");


MODULE_INFO(srcversion, "2CA13D17A8AA6703C4B57CC");
