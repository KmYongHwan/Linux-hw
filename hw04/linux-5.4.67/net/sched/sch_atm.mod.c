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
	{ 0xf1a2f63d, "unregister_qdisc" },
	{ 0x5f9acab2, "register_qdisc" },
	{ 0x15314fce, "consume_skb" },
	{ 0x55f384b9, "skb_realloc_headroom" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xb18156be, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc851a750, "sockfd_lookup" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf2eb1783, "gnet_stats_copy_queue" },
	{ 0xaad0e6be, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9417d3fc, "__qdisc_calculate_pkt_len" },
	{ 0xdb535600, "tcf_classify" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x1f7b1d11, "tcf_block_get" },
	{ 0x913f24ed, "qdisc_create_dflt" },
	{ 0x178b85fa, "pfifo_qdisc_ops" },
	{ 0xf78e4447, "noop_qdisc" },
	{ 0x131ecf3a, "qdisc_reset" },
	{ 0xc5850110, "printk" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x37a0cba, "kfree" },
	{ 0xa0fd0123, "fput" },
	{ 0xf01b4e49, "tcf_block_put" },
	{ 0x24478ec1, "qdisc_put" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2BD3335AB38A47572A1DEDE");
