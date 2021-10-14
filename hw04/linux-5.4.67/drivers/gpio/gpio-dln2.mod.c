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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9f35521e, "dln2_register_event_cb" },
	{ 0x148fa2d1, "gpiochip_irqchip_add_key" },
	{ 0x75c0bf03, "handle_simple_irq" },
	{ 0xdae1d8d2, "devm_gpiochip_add_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94ee1f58, "dln2_transfer" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x88a1a04c, "irq_find_mapping" },
	{ 0xfbc555fe, "dln2_unregister_event_cb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dln2");


MODULE_INFO(srcversion, "2F7B2BE57515326C8CC76FE");
