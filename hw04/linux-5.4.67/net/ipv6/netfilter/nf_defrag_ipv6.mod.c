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
	{ 0x12f43a55, "icmpv6_send" },
	{ 0x2f1ca700, "inet_frag_kill" },
	{ 0x95a9d784, "pskb_trim_rcsum_slow" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0xa8b80792, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x77c46da7, "fqdir_exit" },
	{ 0x10d6aee3, "inet_frag_find" },
	{ 0xbdae6aeb, "inet_frag_reasm_prepare" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9674f8f8, "nf_unregister_net_hooks" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x495e0751, "inet_frags_fini" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x91b9215a, "dev_get_by_index_rcu" },
	{ 0x3785c132, "init_net" },
	{ 0x65782ce7, "fqdir_init" },
	{ 0x5fb4da0a, "nf_register_net_hooks" },
	{ 0x2d2b05f8, "inet_frag_reasm_finish" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x3d3ef5b7, "inet_frag_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4aa487, "inet_frag_pull_head" },
	{ 0xc395c2f1, "inet_frags_init" },
	{ 0x8068dfc9, "inet_frag_queue_insert" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x9111d3b6, "register_net_sysctl" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0xae4bd1fb, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "529E0694C49601ED89FB521");
