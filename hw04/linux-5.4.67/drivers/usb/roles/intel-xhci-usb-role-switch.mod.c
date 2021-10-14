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
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x9fdface3, "usb_role_switch_register" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0xf29cdf27, "software_node_register" },
	{ 0x5f0b2042, "devm_ioremap_nocache" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa805ecfc, "acpi_release_global_lock" },
	{ 0xc9f34c1d, "acpi_acquire_global_lock" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0x3d70e9c5, "software_node_fwnode" },
	{ 0x2882d40e, "usb_role_switch_unregister" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:intel_xhci_usb_sw");

MODULE_INFO(srcversion, "366FCEEC632F329C43F8214");
