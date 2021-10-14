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
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x1e17a65b, "power_supply_set_property" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x926246fd, "pm860x_reg_read" },
	{ 0xef9e7c50, "pm860x_bulk_read" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc245a634, "power_supply_put" },
	{ 0xea70f8b6, "power_supply_get_property" },
	{ 0x8688f0dc, "power_supply_get_by_name" },
	{ 0x54d26dc6, "pm860x_set_bits" },
	{ 0x6a4b47cc, "pm860x_reg_write" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A9F90738F466D99BA3E5D84");
