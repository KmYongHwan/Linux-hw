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
	{ 0xdc6699cb, "acpi_dev_free_resource_list" },
	{ 0x9e67bc55, "i2c_mux_add_adapter" },
	{ 0x349cba85, "strchr" },
	{ 0x754d539c, "strlen" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x8c2c29d5, "i2c_mux_del_adapters" },
	{ 0x6670f93d, "inv_mpu_pmops" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xbc7ade5a, "i2c_mux_alloc" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xeb9cd368, "inv_mpu6050_set_power_itg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xd8605fc2, "acpi_dev_get_resources" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf208263e, "inv_mpu_core_probe" },
	{ 0x37a0cba, "kfree" },
	{ 0x60806523, "i2c_acpi_get_i2c_resource" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0x9caa394e, "is_acpi_device_node" },
};

MODULE_INFO(depends, "i2c-mux,inv-mpu6050");

MODULE_ALIAS("acpi*:INVN6500:*");
MODULE_ALIAS("i2c:mpu6050");
MODULE_ALIAS("i2c:mpu6500");
MODULE_ALIAS("i2c:mpu6515");
MODULE_ALIAS("i2c:mpu9150");
MODULE_ALIAS("i2c:mpu9250");
MODULE_ALIAS("i2c:mpu9255");
MODULE_ALIAS("i2c:icm20608");
MODULE_ALIAS("i2c:icm20602");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6050");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6050C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6500");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6500C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6515");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6515C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9150");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9150C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9250");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9250C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9255");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9255C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20602");
MODULE_ALIAS("of:N*T*Cinvensense,icm20602C*");

MODULE_INFO(srcversion, "51C49B36C71F253C07C67BF");
