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
	{ 0x9a5fab57, "regulator_get_current_limit_regmap" },
	{ 0x46d5c002, "regulator_set_current_limit_regmap" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xc9328139, "irq_create_mapping" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x86c80eb8, "devm_regulator_register" },
	{ 0x7a73e605, "wm831x_isinkv_values" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x95d7801d, "wm831x_set_bits" },
	{ 0x19ae3c48, "wm831x_reg_read" },
	{ 0x4a8c2861, "rdev_get_drvdata" },
	{ 0x47cc26de, "regulator_unlock" },
	{ 0x44246f71, "regulator_notifier_call_chain" },
	{ 0x45f1f35b, "regulator_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D6F51FC446CA9B7CFB2FB3C");
