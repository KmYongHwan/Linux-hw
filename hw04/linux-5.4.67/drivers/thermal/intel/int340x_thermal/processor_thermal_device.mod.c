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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x9d77b976, "intel_soc_dts_iosf_init" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0xe48bc71c, "powercap_register_control_type" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x27050e85, "rapl_add_package" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xee86bd09, "cpu_info" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x6d7be210, "thermal_zone_device_update" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x4ad54488, "sysfs_create_file_ns" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x39d8b55b, "rapl_remove_package" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x25287a72, "rapl_find_package_domain" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xf210079e, "int340x_thermal_zone_add" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x60734e94, "intel_soc_dts_iosf_interrupt_handler" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x845940c8, "powercap_unregister_control_type" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0x82862e2b, "intel_soc_dts_iosf_exit" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x297bafd4, "sysfs_remove_file_ns" },
	{ 0x723160a6, "int340x_thermal_zone_remove" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel_soc_dts_iosf,intel_rapl_common,int340x_thermal_zone");

MODULE_ALIAS("acpi*:INT3401:*");
MODULE_ALIAS("pci:v00008086d00001603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E83sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000318Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008A03sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "015793DBEB9E5E455CBE5B5");
