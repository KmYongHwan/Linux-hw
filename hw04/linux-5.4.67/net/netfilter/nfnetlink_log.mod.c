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
	{ 0xce97fe12, "nf_log_unregister" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xb55ff53b, "nfnetlink_subsys_unregister" },
	{ 0xf3a2353a, "nf_log_register" },
	{ 0x4257ee65, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x5db342c2, "from_kgid_munged" },
	{ 0xcb48ab33, "from_kuid_munged" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x754d539c, "strlen" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xd4ef6408, "nf_log_bind_pf" },
	{ 0x6a831952, "nfnl_ct_hook" },
	{ 0x802ff4ab, "nf_log_unbind_pf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc4142837, "seq_printf" },
	{ 0x364287b0, "proc_set_user" },
	{ 0xb58cd868, "make_kgid" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0x35fac541, "proc_create_net_data" },
	{ 0xc9357388, "nf_log_unset" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0xf720a60b, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x5df081, "__put_net" },
	{ 0x56470118, "__warn_printk" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x8bcc21d4, "nfnetlink_unicast" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "8D39DCE5CBE2FC781DF5117");
