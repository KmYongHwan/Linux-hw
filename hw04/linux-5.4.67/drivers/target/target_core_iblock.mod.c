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
	{ 0xf12f7d7d, "sbc_attrib_attrs" },
	{ 0xe47937f0, "sbc_get_device_type" },
	{ 0x4dcfab9b, "target_backend_unregister" },
	{ 0x5619572c, "transport_backend_register" },
	{ 0x7896ccdc, "sg_miter_start" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc773849f, "sg_miter_stop" },
	{ 0x65ca61cc, "bio_integrity_add_page" },
	{ 0xde006432, "sg_miter_next" },
	{ 0xd02e1d6f, "bio_integrity_alloc" },
	{ 0xb50062, "bioset_integrity_create" },
	{ 0xf1663958, "target_configure_unmap_from_queue" },
	{ 0x5151274a, "blkdev_get_by_path" },
	{ 0x3b49011f, "bioset_init" },
	{ 0x73ca4d6, "bioset_exit" },
	{ 0x1bd3c261, "blkdev_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4ba20fb3, "bdevname" },
	{ 0x9976c0d4, "blkdev_issue_zeroout" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf75a745e, "bio_add_page" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3b6776ea, "sbc_get_write_same_sectors" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x479f68ad, "submit_bio" },
	{ 0x334b33a, "fs_bio_set" },
	{ 0x68609863, "bio_associate_blkg" },
	{ 0x76c4c529, "bio_alloc_bioset" },
	{ 0x739758b1, "bio_put" },
	{ 0xbcbc321b, "target_complete_cmd" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0x95dc3deb, "blkdev_issue_discard" },
	{ 0x8e3aaa2c, "target_to_linux_sector" },
	{ 0xee1200c1, "sbc_parse_cdb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "9A90C28917BC953C4467E04");
