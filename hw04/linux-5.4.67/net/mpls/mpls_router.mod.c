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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xaf95ddb4, "dev_get_flags" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa8b80792, "dst_release" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4cd71f31, "rtnl_notify" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0xa85b8b84, "ip_tunnel_encap_del_ops" },
	{ 0x9e4e6af, "rtnl_register_module" },
	{ 0xc5850110, "printk" },
	{ 0x3419d58, "__skb_warn_lro_forwarding" },
	{ 0xcd279169, "nla_find" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xf6523542, "dev_get_by_index" },
	{ 0x12bc2eb, "dev_remove_pack" },
	{ 0xa19f26a1, "rtnl_af_unregister" },
	{ 0x41804f72, "nla_reserve_nohdr" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb18156be, "skb_pull" },
	{ 0x9fd8fcb4, "ipv6_stub" },
	{ 0x819cae46, "__dev_get_by_index" },
	{ 0x3859de76, "ip_valid_fib_dump_req" },
	{ 0x9ed8133a, "nla_reserve_64bit" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x9f4efd0b, "rtnl_unicast" },
	{ 0x471754f1, "rtnl_set_sk_err" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xc83f964c, "rtnl_af_register" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xbb038948, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1def7190, "neigh_xmit" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x8e281574, "nla_reserve" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6b95e068, "dev_add_pack" },
	{ 0x15314fce, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9111d3b6, "register_net_sysctl" },
	{ 0x4f86b9e2, "skb_gso_validate_network_len" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x59918df5, "ip_tunnel_encap_add_ops" },
	{ 0xec7ae09f, "netlink_strict_get_check" },
};

MODULE_INFO(depends, "ip_tunnel");


MODULE_INFO(srcversion, "BE272100E9C9509C62694B7");
