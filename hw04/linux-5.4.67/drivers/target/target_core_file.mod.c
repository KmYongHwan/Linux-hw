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
	{ 0x3b6776ea, "sbc_get_write_same_sectors" },
	{ 0x570dfe4a, "sbc_dif_verify" },
	{ 0xd8ee8610, "iov_iter_zero" },
	{ 0x4d2b1e2, "vfs_iter_read" },
	{ 0x4ab5063d, "vfs_iter_write" },
	{ 0x7b1e61ab, "iov_iter_bvec" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x95dc3deb, "blkdev_issue_discard" },
	{ 0x8e3aaa2c, "target_to_linux_sector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xf1663958, "target_configure_unmap_from_queue" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x4e3567f7, "match_int" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf75c191, "vfs_fsync_range" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xbcbc321b, "target_complete_cmd" },
	{ 0xee1200c1, "sbc_parse_cdb" },
	{ 0x3ae6ee76, "filp_open" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x999e8297, "vfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfb578fc5, "memset" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5d9818df, "kernel_write" },
	{ 0xe0ea2277, "filp_close" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "B27B0459F288EEBD3748221");
