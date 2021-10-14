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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x99949898, "devm_kstrdup" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x4ad54488, "sysfs_create_file_ns" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x442639ef, "param_ops_uint" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,hidma-mgmt-1.0");
MODULE_ALIAS("of:N*T*Cqcom,hidma-mgmt-1.0C*");
MODULE_ALIAS("acpi*:QCOM8060:*");

MODULE_INFO(srcversion, "0D88B1309DF84DBBE544991");
