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
	{ 0xb3715ef1, "kill_litter_super" },
	{ 0x752832c, "noop_llseek" },
	{ 0xdefbea52, "default_llseek" },
	{ 0x674e30c0, "simple_statfs" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0x3e682364, "unregister_binfmt" },
	{ 0x1352c836, "__register_binfmt" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0xc5850110, "printk" },
	{ 0x7ede2eec, "iput" },
	{ 0x19973b71, "d_instantiate" },
	{ 0x6d1c5872, "simple_pin_fs" },
	{ 0x638c7869, "current_time" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x2947182d, "new_inode" },
	{ 0x76201a4, "lookup_one_len" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x64bbc288, "string_unescape" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x349cba85, "strchr" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x754d539c, "strlen" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x273d7597, "simple_release_fs" },
	{ 0x664b3b7a, "d_drop" },
	{ 0x3a966e1c, "drop_nlink" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe0ea2277, "filp_close" },
	{ 0x37a0cba, "kfree" },
	{ 0xd172461b, "clear_inode" },
	{ 0x18c1f5d1, "simple_fill_super" },
	{ 0x7545c1c3, "get_tree_single" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x801d3726, "prepare_binprm" },
	{ 0xc0b2685d, "open_exec" },
	{ 0x2e6ba681, "would_dump" },
	{ 0x5c8b5637, "fd_install" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xac855e42, "__close_fd" },
	{ 0xba312d7b, "current_task" },
	{ 0xc486e243, "remove_arg_zero" },
	{ 0x41b0b9cc, "dput" },
	{ 0xba1acb2a, "search_binary_handler" },
	{ 0xe6f9ebc7, "kernel_read" },
	{ 0x4595bf6d, "dentry_open" },
	{ 0x86d57b0e, "bprm_change_interp" },
	{ 0x8d6a5721, "copy_strings_kernel" },
	{ 0xa0fd0123, "fput" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f984513, "strrchr" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x11089ac7, "_ctype" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "71E5CB875E3366B522B573D");
