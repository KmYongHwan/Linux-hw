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
	{ 0x8818748e, "acpi_bus_register_driver" },
	{ 0xb915fb73, "nvdimm_cmd_mask" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2e7a87b4, "nd_blk_region_provider_data" },
	{ 0x5c894790, "nd_blk_region_to_dimm" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x224b57e5, "nvdimm_bus_attribute_group" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xf6a28554, "region_intersects" },
	{ 0xaf076aec, "nd_fletcher64" },
	{ 0x2c635527, "arch_invalidate_pmem" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xdd18a993, "acpi_check_dsm" },
	{ 0xca61f605, "nvdimm_attribute_group" },
	{ 0x8f2703b7, "wbinvd_on_all_cpus" },
	{ 0x1f03d157, "nd_blk_region_set_provider_data" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc019857d, "nvdimm_kobj" },
	{ 0x15c6a7fc, "nvdimm_pmem_region_create" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x876eaa09, "kernfs_put" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0xeec78261, "acpi_bus_unregister_driver" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1877ca13, "mce_is_memory_error" },
	{ 0x44943c5a, "nd_cmd_in_size" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x773cb19b, "nd_region_dev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x71b327b8, "nvdimm_bus_register" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x695dd974, "nvdimm_to_bus" },
	{ 0x190c9f18, "nd_numa_attribute_group" },
	{ 0x3b72527d, "nvdimm_in_overwrite" },
	{ 0xd7b416a6, "nvdimm_flush" },
	{ 0x5f23e3fa, "insert_resource" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x37a377b4, "nd_region_acquire_lane" },
	{ 0x6484689f, "nvdimm_provider_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xcdb500cc, "nvdimm_volatile_region_create" },
	{ 0x1d9b0999, "devm_nvdimm_memremap" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8dd7d08d, "nd_region_attribute_group" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xfa297415, "acpi_map_pxm_to_node" },
	{ 0x23d7a534, "to_nvdimm_bus_dev" },
	{ 0xccdf04d7, "nvdimm_name" },
	{ 0x67edb2cb, "nd_blk_memremap_flags" },
	{ 0x4616dfc0, "kernfs_find_and_get_ns" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x328e3354, "__memcpy_flushcache" },
	{ 0xb89b137c, "nvdimm_bus_unregister" },
	{ 0xb501b2df, "nd_cmd_dimm_desc" },
	{ 0x1103ef58, "nd_mapping_attribute_group" },
	{ 0xe3a53f4c, "sort" },
	{ 0xd697510d, "nd_cmd_out_size" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf4358872, "devm_kfree" },
	{ 0x86688ad0, "nd_region_release_lane" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x5d0739a1, "nd_device_attribute_group" },
	{ 0xbca8ce75, "to_nd_desc" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x92b99a33, "acpi_put_table" },
	{ 0xc2c5802, "work_busy" },
	{ 0xb2db2d5, "remove_resource" },
	{ 0x7925390c, "nvdimm_has_flush" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x258b7abb, "acpi_find_child_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x42e751cf, "to_nvdimm_bus" },
	{ 0x71c2cc64, "kernfs_notify" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x4b1d94aa, "mce_is_correctable" },
	{ 0x8384647a, "acpi_map_pxm_to_online_node" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc9b9a534, "nvdimm_bus_check_dimm_count" },
	{ 0xa0bd96af, "to_nd_region" },
	{ 0xc227ee42, "__nvdimm_create" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0x78164bd2, "to_nvdimm" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa01a8d9b, "nd_cmd_bus_desc" },
	{ 0x74801e4, "param_ops_ulong" },
	{ 0x3d149785, "nvdimm_bus_add_badrange" },
	{ 0x79804cae, "nd_region_provider_data" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x174ef6c2, "mce_usable_address" },
	{ 0x36c9e3e4, "to_nd_blk_region" },
	{ 0xdd199d5d, "nvdimm_region_notify" },
	{ 0xb17a961e, "nvdimm_blk_region_create" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI0012:*");

MODULE_INFO(srcversion, "1F21DE13AD99E5C90F403B3");
