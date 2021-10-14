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
	{ 0x5ada0011, "input_event" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xff76d558, "input_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x9ec43e96, "platform_get_irq_byname" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C4BFDA54BAD62A804B7DC10");
