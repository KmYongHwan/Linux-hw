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
	{ 0xab5b8a7a, "nf_ct_unexpect_related" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x5465cea, "__nf_ct_refresh_acct" },
	{ 0xa8b80792, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc6070a70, "nf_ct_helper_init" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xcc9a0d0e, "nf_ct_expect_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92922bbc, "nf_ip_route" },
	{ 0x479f62f5, "nf_conntrack_helpers_register" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x11089ac7, "_ctype" },
	{ 0xc5850110, "printk" },
	{ 0xa03d3a7b, "nf_ct_expect_put" },
	{ 0xcb8d8014, "nf_ct_expect_alloc" },
	{ 0x5a921311, "strncmp" },
	{ 0x9f38e93b, "nf_ct_expect_related_report" },
	{ 0xf9a1c955, "nf_conntrack_helpers_unregister" },
	{ 0xe59cbd66, "nf_ct_remove_expect" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xef6e9a51, "__nf_ct_expect_find" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1685288e, "nf_ct_helper_log" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbd3b70b9, "__nf_ip6_route" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xae4bd1fb, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "D4276A7329EDE7BA1F18291");
