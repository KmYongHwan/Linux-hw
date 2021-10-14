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
	{ 0xdae1d8d2, "devm_gpiochip_add_data" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x95d7801d, "wm831x_set_bits" },
	{ 0xc9328139, "irq_create_mapping" },
	{ 0x6168380e, "seq_putc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6bec4894, "gpiochip_is_requested" },
	{ 0xc4142837, "seq_printf" },
	{ 0x19ae3c48, "wm831x_reg_read" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C9A2CD24B54889DD074442F");
