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
	{ 0x890b3d61, "_dev_err" },
	{ 0xff76d558, "input_register_device" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x6a4b47cc, "pm860x_reg_write" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x5ada0011, "input_event" },
	{ 0xef9e7c50, "pm860x_bulk_read" },
	{ 0x54d26dc6, "pm860x_set_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "60B686924D2D48E9C04A6A8");
