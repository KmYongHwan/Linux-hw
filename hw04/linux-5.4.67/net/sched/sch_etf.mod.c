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
	{ 0xc634ca7, "kfree_skb_list" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x1c792212, "rtnl_kfree_skbs" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd84632fa, "qdisc_watchdog_init_clockid" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xd84fc956, "qdisc_watchdog_cancel" },
	{ 0x6d665949, "qdisc_watchdog_schedule_ns" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x4fb715da, "sock_queue_err_skb" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "741D6D29A86E928B15D94D0");
