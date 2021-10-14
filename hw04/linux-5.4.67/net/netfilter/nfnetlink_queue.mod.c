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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xb55ff53b, "nfnetlink_subsys_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4257ee65, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x45da06d4, "nf_queue_entry_release_refs" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc25409fb, "nf_queue_entry_get_refs" },
	{ 0xb0c22846, "__skb_gso_segment" },
	{ 0xc5850110, "printk" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0x8bcc21d4, "nfnetlink_unicast" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x7c083e8, "skb_checksum_help" },
	{ 0x29e4d365, "skb_zerocopy" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x5db342c2, "from_kgid_munged" },
	{ 0xcb48ab33, "from_kuid_munged" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x4e3ece61, "skb_zerocopy_headlen" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf5a56041, "skb_tx_error" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x924a79fd, "__nla_reserve" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x8ddcee7d, "___pskb_trim" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9a5e7275, "skb_ensure_writable" },
	{ 0x6a831952, "nfnl_ct_hook" },
	{ 0xc4142837, "seq_printf" },
	{ 0xf8892efa, "nf_register_queue_handler" },
	{ 0x35fac541, "proc_create_net_data" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x4cfa2b3f, "nf_unregister_queue_handler" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf720a60b, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xadf2d60e, "nf_reinject" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6b6f468e, "nf_ct_hook" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "C7D13EC4582B687F2AD48AA");
