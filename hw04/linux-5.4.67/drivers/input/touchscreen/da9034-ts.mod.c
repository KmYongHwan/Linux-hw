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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc8e11883, "da903x_read" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5ada0011, "input_event" },
	{ 0x14a8d7bd, "da903x_query_status" },
	{ 0xba16e3, "da903x_write" },
	{ 0xcc31dc74, "da903x_set_bits" },
	{ 0xde87e6f0, "da903x_register_notifier" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xff76d558, "input_register_device" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xacbc4394, "da903x_clr_bits" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xa6bd321d, "da903x_unregister_notifier" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E969E720628498A94FC17AF");
