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
	{ 0x45f2f1a7, "deregister_atm_ioctl" },
	{ 0xf5eb2cce, "register_atm_ioctl" },
	{ 0x15314fce, "consume_skb" },
	{ 0x55f384b9, "skb_realloc_headroom" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9c855ae9, "vcc_process_recv_queue" },
	{ 0x9415ca79, "__module_get" },
	{ 0x8cc87a7f, "ppp_register_channel" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x893a6298, "ppp_unit_number" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xad09e14f, "ppp_channel_index" },
	{ 0x52269f88, "ppp_output_wakeup" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3e84d551, "ppp_input_error" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xb18156be, "skb_pull" },
	{ 0xf720a60b, "module_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b255d77, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8303a2c5, "ppp_input" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "DBB03B60EB8633699EE38B5");
