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
	{ 0x2eda567a, "nd_btt_probe" },
	{ 0x22d9b63b, "to_nd_pfn" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x77358855, "iomem_resource" },
	{ 0xf7d89c94, "devm_init_badblocks" },
	{ 0xa1fbe67d, "badblocks_clear" },
	{ 0xb714b5c, "blk_queue_max_hw_sectors" },
	{ 0x2c635527, "arch_invalidate_pmem" },
	{ 0x11db28fd, "nvdimm_namespace_common_probe" },
	{ 0xc19a6360, "is_nd_pfn" },
	{ 0xef0ca8ab, "badblocks_check" },
	{ 0x7242d92, "put_dax" },
	{ 0x597c0e82, "generic_end_io_acct" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8135613, "dax_write_cache" },
	{ 0x2105d91f, "devm_nsio_disable" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6b7e8664, "devm_memremap_pages" },
	{ 0x876eaa09, "kernfs_put" },
	{ 0xc21cce83, "blk_freeze_queue_start" },
	{ 0xfe41aebd, "is_nvdimm_sync" },
	{ 0x4c6d71ca, "nd_dax_probe" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6265c91a, "revalidate_disk" },
	{ 0x88120424, "blk_alloc_queue_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaf65366b, "nd_pfn_probe" },
	{ 0xd7b416a6, "nvdimm_flush" },
	{ 0x7e20a54d, "is_nd_btt" },
	{ 0x5495a1b7, "__alloc_disk_node" },
	{ 0x61817954, "nvdimm_namespace_disk_name" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x678eaa2, "devm_nsio_enable" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0xba312d7b, "current_task" },
	{ 0x27c51a3f, "to_nd_btt" },
	{ 0x1295f5b1, "pmem_sector_size" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xb29b06fc, "del_gendisk" },
	{ 0x4f3ba215, "__nd_driver_register" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x38f8091c, "dax_attribute_group" },
	{ 0x75ab04d7, "nvdimm_clear_poison" },
	{ 0x4616dfc0, "kernfs_find_and_get_ns" },
	{ 0x5f6f1e9e, "dax_get_private" },
	{ 0x328e3354, "__memcpy_flushcache" },
	{ 0x8c61cac2, "_copy_to_iter_mcsafe" },
	{ 0xc50793a, "generic_start_io_acct" },
	{ 0x2d715234, "bio_endio" },
	{ 0x696575b5, "pmem_should_map_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7925390c, "nvdimm_has_flush" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xd8eb755f, "__generic_fsdax_supported" },
	{ 0xb091f655, "nvdimm_namespace_detach_btt" },
	{ 0x29869d14, "blk_queue_flag_set" },
	{ 0x9b64a05d, "blk_queue_make_request" },
	{ 0xe0becd46, "nvdimm_badblocks_populate" },
	{ 0x9f0191bf, "blk_queue_physical_block_size" },
	{ 0xd79f07cc, "nvdimm_namespace_attach_btt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xa571ed0e, "nvdimm_setup_pfn" },
	{ 0xfad9c827, "kill_dax" },
	{ 0x16933923, "put_disk" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0xb18d46f9, "_copy_from_iter_flushcache" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x71c2cc64, "kernfs_notify" },
	{ 0xba97ec39, "alloc_dax" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x833c3313, "__memcpy_mcsafe" },
	{ 0xd2c9e2e1, "blk_queue_write_cache" },
	{ 0x69acdf38, "memcpy" },
	{ 0x99c011d8, "mcsafe_key" },
	{ 0xa0bd96af, "to_nd_region" },
	{ 0x91607d95, "set_memory_wb" },
	{ 0xc681227b, "nvdimm_revalidate_disk" },
	{ 0x3e0bc3d7, "device_add_disk" },
	{ 0x64e50568, "devm_memremap" },
	{ 0x6c2c50de, "nvdimm_has_cache" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x12ff81a7, "blk_queue_logical_block_size" },
	{ 0xfaad5364, "page_endio" },
};

MODULE_INFO(depends, "nd_btt");


MODULE_INFO(srcversion, "535C593B0D9AFD9B9BD3984");
