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
	{ 0xd00ae275, "max8925_reg_read" },
	{ 0x575ef7d2, "max8925_bulk_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8444a38c, "max8925_reg_write" },
	{ 0x9687202c, "max8925_bulk_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x58a57bfc, "devm_rtc_device_register" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0xefffca8, "max8925_set_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DBA939176AAC29CFC604B48");
