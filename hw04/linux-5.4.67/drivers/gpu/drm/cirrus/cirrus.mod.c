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
	{ 0xcc10d7f, "drm_atomic_helper_connector_destroy_state" },
	{ 0x63322608, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xb80a5411, "drm_connector_cleanup" },
	{ 0x6c2b480d, "drm_helper_probe_single_connector_modes" },
	{ 0xe85d5ee4, "drm_atomic_helper_connector_reset" },
	{ 0x7e94ed1, "drm_atomic_helper_commit" },
	{ 0x958579ef, "drm_atomic_helper_check" },
	{ 0xc344af18, "drm_release" },
	{ 0xcdc40c6e, "drm_open" },
	{ 0x6361f76a, "drm_gem_shmem_mmap" },
	{ 0xfb9c4ea1, "drm_compat_ioctl" },
	{ 0x1edd586c, "drm_ioctl" },
	{ 0xea43a0e3, "drm_poll" },
	{ 0xb245c251, "drm_read" },
	{ 0x752832c, "noop_llseek" },
	{ 0x2de767e, "drm_gem_shmem_dumb_create" },
	{ 0x55e801ae, "drm_gem_prime_mmap" },
	{ 0xa9de5a39, "drm_gem_shmem_prime_import_sg_table" },
	{ 0xeaf7a216, "drm_gem_prime_fd_to_handle" },
	{ 0x3cde5b42, "drm_gem_prime_handle_to_fd" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x42595e58, "vgacon_text_force" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x1449451d, "drm_crtc_send_vblank_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3db9e734, "drm_atomic_helper_damage_merged" },
	{ 0xf10de535, "ioread8" },
	{ 0x297fa670, "drm_fbdev_generic_setup" },
	{ 0xf088322, "drm_dev_register" },
	{ 0x52cca85c, "drm_mode_config_reset" },
	{ 0xd73bff89, "drm_simple_display_pipe_init" },
	{ 0x44403596, "drm_connector_init" },
	{ 0xeb667e56, "drm_mode_config_init" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x1d06f8c9, "drm_dev_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x72add5d0, "vga_remove_vgacon" },
	{ 0x6f53da0e, "remove_conflicting_pci_framebuffers" },
	{ 0xf3ab6c51, "drm_fb_xrgb8888_to_rgb565_dstclip" },
	{ 0x161c5d62, "drm_fb_memcpy_dstclip" },
	{ 0xb51a629d, "drm_fb_xrgb8888_to_rgb888_dstclip" },
	{ 0x1f56a52b, "drm_gem_shmem_vunmap" },
	{ 0x12261457, "drm_gem_shmem_vmap" },
	{ 0x848d372e, "iowrite8" },
	{ 0x4b98514a, "drm_set_preferred_mode" },
	{ 0x7b71eb, "drm_add_modes_noedid" },
	{ 0x3797f6c0, "drm_gem_fb_create_with_dirty" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xca161191, "drm_dev_put" },
	{ 0xedc03953, "iounmap" },
	{ 0xe44eee50, "drm_mode_config_cleanup" },
	{ 0x5482e4ac, "drm_dev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("pci:v00001013d000000B8sv00001AF4sd00001100bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000B8sv00005853sd00000001bc*sc*i*");

MODULE_INFO(srcversion, "DEC12B4F2FC442A6445B8F1");
