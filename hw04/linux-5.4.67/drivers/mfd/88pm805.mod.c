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
	{ 0xe719a85f, "pm80x_pm_ops" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6bb624d0, "mfd_add_devices" },
	{ 0xc0ccc4df, "regmap_add_irq_chip" },
	{ 0x12a38747, "usleep_range" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x5f498eba, "pm80x_init" },
	{ 0xd99fd720, "pm80x_deinit" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0xb93527f1, "mfd_remove_devices" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "88pm80x");

MODULE_ALIAS("i2c:88PM805");

MODULE_INFO(srcversion, "783BC92E546BB595FC28CFC");
